#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKUserPersonal : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _political_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* _langs_k__BackingField;
		mscorlib::System::String* _religion_k__BackingField;
		mscorlib::System::String* _inspired_by_k__BackingField;
		int32_t _people_main_k__BackingField;
		int32_t _life_main_k__BackingField;
		int32_t _smoking_k__BackingField;
		int32_t _alcohol_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKUserPersonal* Deserialize(mscorlib::System::Object* UserPersonal);
		int32_t get_political();
		void set_political(int32_t value);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* get_langs();
		void set_langs(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* value);
		mscorlib::System::String* get_religion();
		void set_religion(mscorlib::System::String* value);
		mscorlib::System::String* get_inspired_by();
		void set_inspired_by(mscorlib::System::String* value);
		int32_t get_people_main();
		void set_people_main(int32_t value);
		int32_t get_life_main();
		void set_life_main(int32_t value);
		int32_t get_smoking();
		void set_smoking(int32_t value);
		int32_t get_alcohol();
		void set_alcohol(int32_t value);
		void _ctor();
	};
}

