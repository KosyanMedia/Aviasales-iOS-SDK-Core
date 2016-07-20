Pod::Spec.new do |s|

	s.name         = "AviasalesSDK"
	s.version      = "2.0.0-beta2"
	s.summary      = "Integrate flight search and booking framework in your apps."
	s.description  = <<-DESC
Aviasales SDK lets you create custom process of searching and buying tickets to flights.
                   DESC

	s.homepage     = "https://github.com/KosyanMedia/Aviasales-iOS-SDK"
	s.license      = { :type => "MIT", :file => "LICENSE" }
	s.author       = { "Aviasales iOS Team" => "support@aviasales.ru" }
	s.platform     = :ios, "8.0"
	s.source       = { :git => "https://github.com/KosyanMedia/Aviasales-iOS-SDK-Core.git", :tag => "2.0.0-beta2" }
	s.ios.resource = "Library/AviasalesSDKResources.bundle"
	s.exclude_files = "Classes/Exclude"
	s.ios.vendored_frameworks = "Library/AviasalesSDK.framework"


end
