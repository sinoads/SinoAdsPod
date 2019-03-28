Pod::Spec.new do |s|

  s.name         = "SinoAds"
  s.version      = "0.0.2"
  s.summary      = "SinoAds summary"
  s.description  = "SinoAds description"
  s.homepage     = "https://github.com/sinoads/SinoAdsPod.git"
  s.license      = { :type => "Apache License, Version 2.0", :file => "LICENSE" }
  s.author             = { "thistl" => "id@sinoads.com" }
  
  s.platform     = :ios
  s.ios.deployment_target = "8.0"
  
  s.source       = { :git => "https://github.com/sinoads/SinoAdsPod.git", :tag => "#{s.version}" }

  s.vendored_frameworks = "Frameworks/SinoAds.framework", "Frameworks/BUAdSDK.framework"
  
  s.resource = "Frameworks/BUAdSDK.bundle"
  
  s.frameworks = "StoreKit", "MobileCoreServices", "WebKit", "MediaPlayer", "CoreMedia", "AVFoundation", "CoreLocation", "CoreTelephony", "SystemConfiguration", "AdSupport", "CoreMotion"
  s.libraries = "resolv.9", "c++", "z"
  
  s.static_framework = true

end
