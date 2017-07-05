require 'json'
package = JSON.parse(File.read('package.json'))

Pod::Spec.new do |s|
  s.name          = package['name']
  s.version       = package['version']
  s.summary       = package['description']
  s.requires_arc  = true
  s.author        = { 'Simon Bugert' => 'simon.bugert@gmail.com' }
  s.license       = package['license']
  s.homepage      = package['homepage']
  s.source        = { :git => 'https://github.com/sbugert/react-native-admob.git' }
  s.platform      = :ios, '7.0'
  s.source_files  = 'ios/*.{h,m}'
  s.framework     = %w{AudioToolbox AVFoundation CoreGraphics CoreMedia CoreTelephony EventKit EventKitUI MediaPlayer MessageUI StoreKit SystemConfiguration}
  s.dependency      'React'
end
