#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Action; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct YesNoTaskData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Action* _OnYesButton_k__BackingField;
		mscorlib::System::Action* _OnNoButton_k__BackingField;
		mscorlib::System::String* _Message_k__BackingField;
		IL2CPP::Array<mscorlib::System::Object*>* _CustomData_k__BackingField;
		mscorlib::System::Action* get_OnYesButton();
		void set_OnYesButton(mscorlib::System::Action* value);
		mscorlib::System::Action* get_OnNoButton();
		void set_OnNoButton(mscorlib::System::Action* value);
		mscorlib::System::String* get_Message();
		void set_Message(mscorlib::System::String* value);
		IL2CPP::Array<mscorlib::System::Object*>* get_CustomData();
		void set_CustomData(IL2CPP::Array<mscorlib::System::Object*>* value);
		void _ctor();
	};
}

