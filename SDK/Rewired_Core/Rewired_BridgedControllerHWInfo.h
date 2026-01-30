#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_InputSource.h"
#include "Rewired_ControlDeviceType.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_PidVid.h"
namespace Rewired_Core::Rewired { struct PidVid; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "Rewired_Platforms_XInputDeviceSubType.h"
#include "Rewired_Platforms_WebGLWebBrowserType.h"
#include "Rewired_Platforms_WebGLOSType.h"
#include "Rewired_Platforms_WebGLGamepadMappingType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct BridgedControllerHWInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool isMock;
		Rewired_Core::Rewired::InputSource inputManagerSource;
		Rewired_Core::Rewired::InputSource inputSource;
		Rewired_Core::Rewired::ControlDeviceType deviceType;
		mscorlib::System::String* hardwareIdentifier;
		int32_t hardwareAxisCount;
		int32_t hardwareButtonCount;
		int32_t hardwareHatCount;
		mscorlib::System::String* hw_productName;
		Rewired_Core::Rewired::PidVid hw_pidVid;
		mscorlib::System::Guid hw_deviceGuid;
		int32_t hw_productId;
		mscorlib::System::String* hw_bluetoothDeviceName;
		bool hw_isBluetoothDevice;
		bool hw_supportsVoice;
		bool hw_supportsVibration;
		Rewired_Core::Rewired::Platforms::XInputDeviceSubType hw_xInputSubType;
		mscorlib::System::String* hw_manufacturer;
		mscorlib::System::String* hw_serialNumber;
		int32_t hw_vendorId;
		int32_t hw_version;
		mscorlib::System::String* hw_systemDeviceName;
		bool hw_isSDL2Gamepad;
		Rewired_Core::Rewired::Platforms::WebGLWebBrowserType webGL_webBrowserType;
		Rewired_Core::Rewired::Platforms::WebGLOSType webGL_osType;
		Rewired_Core::Rewired::Platforms::WebGLGamepadMappingType webGL_mappingType;
		IL2CPP::Array<mscorlib::System::String*>* webGL_webBrowserVersionSplit;
		IL2CPP::Array<mscorlib::System::String*>* webGL_osVersionSplit;
		int32_t hw_localVibrationMotorCount;
		mscorlib::System::String* definitionMatchTag;
		void _ctor();
		void _ctor(Rewired_Core::Rewired::BridgedControllerHWInfo* source);
		void QXkUXNRediRLyaHmvgLkPttvYoz(Rewired_Core::Rewired::BridgedControllerHWInfo* A_1);
	};
}

