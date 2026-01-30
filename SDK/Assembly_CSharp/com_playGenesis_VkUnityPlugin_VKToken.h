#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_EventArgs.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKToken : mscorlib::System::EventArgs
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* access_token;
		int32_t expires_in;
		mscorlib::System::String* user_id;
		mscorlib::System::DateTime tokenRecievedTime;
		mscorlib::System::String* email;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKToken* ParseSerializeTokenFromNaviteSdk(mscorlib::System::String* message);
		static bool IsTokenNotExpired(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKToken* ti);
		int32_t TokenValidFor();
		static void ResetToken();
		void Save();
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKToken* LoadPersistent();
		static mscorlib::System::String* ParseFromAuthUrl(mscorlib::System::String* url);
		void _ctor();
	};
}

