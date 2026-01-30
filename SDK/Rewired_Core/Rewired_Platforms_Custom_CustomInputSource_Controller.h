#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Platforms_Custom_CustomInputSource.h"
namespace Rewired_Core::Rewired::Platforms::Custom { struct CustomInputSource; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Platforms::Custom
{
	struct CustomInputSource_Controller : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _isConnected;
		mscorlib::System::String* _deviceName;
		mscorlib::System::String* _customName;
		mscorlib::System::String* get_customName();
		bool get_isConnected();
		void set_isConnected(bool value);
		mscorlib::System::String* get_deviceName();
		void _ctor(mscorlib::System::String* deviceName);
		void Disconnect();
		void Connect();
		void Update();
	};
}

