#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_EventArgs.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct Error : mscorlib::System::EventArgs
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* error_code;
		mscorlib::System::String* error_msg;
		mscorlib::System::String* fullJson;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::Error* Deserialize(mscorlib::System::String* json);
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::Error* ParseSerializedFromFromNativeSdk(mscorlib::System::String* errormessage);
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::Error* ParseVkError(mscorlib::System::String* resp);
		void _ctor();
	};
}

