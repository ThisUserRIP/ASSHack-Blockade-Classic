#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired::Data { struct ControllerMapEnabler_Rule_Editor; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct ControllerMapEnabler_RuleSet; };

namespace Rewired_Core::Rewired::Data
{
	struct ControllerMapEnabler_RuleSet_Editor : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _id;
		mscorlib::System::String* _name;
		mscorlib::System::String* _tag;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::ControllerMapEnabler_Rule_Editor>* _rules;
		int32_t get_id();
		void set_id(int32_t value);
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		mscorlib::System::String* get_tag();
		void set_tag(mscorlib::System::String* value);
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::ControllerMapEnabler_Rule_Editor>* get_rules();
		void set_rules(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::ControllerMapEnabler_Rule_Editor>* value);
		void _ctor();
		void _ctor(Rewired_Core::Rewired::Data::ControllerMapEnabler_RuleSet_Editor* source);
		Rewired_Core::Rewired::Data::ControllerMapEnabler_RuleSet_Editor* Clone();
		Rewired_Core::Rewired::ControllerMapEnabler_RuleSet* ToRuntime();
	};
}

