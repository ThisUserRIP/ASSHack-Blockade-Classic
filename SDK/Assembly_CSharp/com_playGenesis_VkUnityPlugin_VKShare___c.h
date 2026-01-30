#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "com_playGenesis_VkUnityPlugin_VKShare.h"
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKShare; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKRequest; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKShare___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKShare___c* __9;
			mscorlib::System::Action_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest>* __9__9_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void __ctor_b__9_0(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* r);
	};
}

