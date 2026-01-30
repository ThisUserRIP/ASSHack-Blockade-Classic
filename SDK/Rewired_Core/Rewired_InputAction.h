#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "Rewired_InputActionType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct InputAction : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _id;
		mscorlib::System::String* _name;
		Rewired_Core::Rewired::InputActionType _type;
		mscorlib::System::String* _descriptiveName;
		mscorlib::System::String* _positiveDescriptiveName;
		mscorlib::System::String* _negativeDescriptiveName;
		int32_t _behaviorId;
		bool _userAssignable;
		int32_t _categoryId;
		mscorlib::System::String* aqeSStFoXfLSKWlNzEAxEQERWRFg;
		mscorlib::System::String* ahjlIGghpfEddzLHuzLdKpMMuog;
		int32_t get_id();
		void set_id(int32_t value);
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		Rewired_Core::Rewired::InputActionType get_type();
		void set_type(Rewired_Core::Rewired::InputActionType value);
		mscorlib::System::String* get_descriptiveName();
		void set_descriptiveName(mscorlib::System::String* value);
		mscorlib::System::String* get_positiveDescriptiveName();
		void set_positiveDescriptiveName(mscorlib::System::String* value);
		mscorlib::System::String* get_negativeDescriptiveName();
		void set_negativeDescriptiveName(mscorlib::System::String* value);
		int32_t get_behaviorId();
		void set_behaviorId(int32_t value);
		int32_t get_categoryId();
		void set_categoryId(int32_t value);
		bool get_userAssignable();
		void set_userAssignable(bool value);
		void _ctor();
		void _ctor(Rewired_Core::Rewired::InputAction* source);
		Rewired_Core::Rewired::InputAction* Clone();
	};
}

