#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct Player; };
namespace Rewired_Core::Rewired { struct ControllerMapEnabler_wHqkuIoGNdizXgXEUBaCAAvdFEds; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct ControllerMapEnabler_RuleSet; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct SerializedObject; };

namespace Rewired_Core::Rewired
{
	struct ControllerMapEnabler : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool eEGiIPEupbQLDWwJrozxiWefseDw;
		Rewired_Core::Rewired::Player* NBJGKWAdnpIXZRDqoFalAxzujWXb;
		Rewired_Core::Rewired::ControllerMapEnabler_wHqkuIoGNdizXgXEUBaCAAvdFEds* RiSPUFoMUhsLivNVSjRSABzIhuS;
		int32_t CegCZCxKXWIRHZSULEYHhSHkAZS;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMapEnabler_RuleSet>* MBHImhmTFtLVCZykBOFLkdbDMWj;
		void _ctor(Rewired_Core::Rewired::Player* player, Rewired_Core::Rewired::ControllerMapEnabler_wHqkuIoGNdizXgXEUBaCAAvdFEds* startingSettings);
		bool get_enabled();
		void set_enabled(bool value);
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMapEnabler_RuleSet>* get_ruleSets();
		void set_ruleSets(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMapEnabler_RuleSet>* value);
		void Apply();
		void LoadDefaults();
		mscorlib::System::String* ToXmlString();
		mscorlib::System::String* ToJsonString();
		bool ImportXml(mscorlib::System::String* xmlString);
		bool ImportJson(mscorlib::System::String* jsonString);
		Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* BTjEytEDmfXDlKCGhgjizVfcbDhc();
		void wmwnpPTKYsoTdTkKJiXqGRUwzei(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* A_1);
		bool oEKaCGHExUmCjCFSEnlxSTdOydKx(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* A_1);
	};
}

