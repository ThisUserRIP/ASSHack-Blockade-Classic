#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKPushSettings : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _disabled_until_k__BackingField;
		int32_t _sound_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPushSettings* Deserialize(mscorlib::System::Object* settings);
		int32_t get_disabled_until();
		void set_disabled_until(int32_t value);
		int32_t get_sound();
		void set_sound(int32_t value);
		void _ctor();
	};
}

