Pod::Spec.new do |s|

	s.name         = "AviasalesSDK"
	s.version      = "2.0.0-GM"
	s.summary      = "Integrate flight search and booking framework in your apps."
	s.description  = <<-DESC
Aviasales iOS SDK is a framework integrating flight search engine into your app.
                   DESC

	s.homepage     = "https://github.com/KosyanMedia/Aviasales-iOS-SDK"
	s.license      = { :type => "MIT", :file => "LICENSE" }
	s.author       = { "Aviasales iOS Team" => "support@aviasales.ru" }
	s.platform     = :ios, "8.0"
	s.source       = { :git => "https://github.com/KosyanMedia/Aviasales-iOS-SDK-Core.git", :tag => "2.0.0-GM" }
	s.ios.resource = "Library/AviasalesSDKResources.bundle"
	s.exclude_files = "Classes/Exclude"
	s.ios.vendored_frameworks = "Library/AviasalesSDK.framework"


end
