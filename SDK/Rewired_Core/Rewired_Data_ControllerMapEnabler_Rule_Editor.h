#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Rewired_Core::Rewired::Data { struct ControllerSetSelector_Editor; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct ControllerMapEnabler_Rule; };
namespace mscorlib::System { struct Object; };

namespace Rewired_Core::Rewired::Data
{
	struct ControllerMapEnabler_Rule_Editor : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _tag;
		bool _enable;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* _categoryIds;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* _layoutIds;
		Rewired_Core::Rewired::Data::ControllerSetSelector_Editor* _controllerSetSelector;
		mscorlib::System::String* get_tag();
		void set_tag(mscorlib::System::String* value);
		bool get_enable();
		void set_enable(bool value);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* get_categoryIds();
		void set_categoryIds(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* value);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* get_layoutIds();
		void set_layoutIds(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* value);
		Rewired_Core::Rewired::Data::ControllerSetSelector_Editor* get_controllerSetSelector();
		void set_controllerSetSelector(Rewired_Core::Rewired::Data::ControllerSetSelector_Editor* value);
		void _ctor();
		void _ctor(Rewired_Core::Rewired::Data::ControllerMapEnabler_Rule_Editor* source);
		Rewired_Core::Rewired::ControllerMapEnabler_Rule* ToRuntime();
		mscorlib::System::Object* Rewired_Utils_Interfaces_IDeepCloneable_DeepClone();
	};
}

