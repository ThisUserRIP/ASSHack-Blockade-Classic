#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "VKController.h"
namespace Assembly_CSharp { struct VKController; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct Error; };
namespace mscorlib::System { template <typename TEventArgs> struct EventHandler_1; };
namespace mscorlib::System { struct Action; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKToken; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKRequest; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp
{
	struct VKController___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::VKController___c* __9;
			mscorlib::System::EventHandler_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::Error>* __9__4_0;
			mscorlib::System::Action* __9__4_1;
			mscorlib::System::Action* __9__4_2;
			mscorlib::System::EventHandler_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKToken>* __9__4_3;
			mscorlib::System::Action_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest>* __9__4_4;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void _ApiCheatSheet_b__4_0(mscorlib::System::Object* sender, Assembly_CSharp::com::playGenesis::VkUnityPlugin::Error* error);
		void _ApiCheatSheet_b__4_1();
		void _ApiCheatSheet_b__4_2();
		void _ApiCheatSheet_b__4_3(mscorlib::System::Object* sender, Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKToken* token);
		void _ApiCheatSheet_b__4_4(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* request);
	};
}

