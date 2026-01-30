#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct InputCategory : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _name;
		mscorlib::System::String* _descriptiveName;
		mscorlib::System::String* _tag;
		int32_t _id;
		bool _userAssignable;
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		mscorlib::System::String* get_descriptiveName();
		void set_descriptiveName(mscorlib::System::String* value);
		mscorlib::System::String* get_tag();
		void set_tag(mscorlib::System::String* value);
		int32_t get_id();
		void set_id(int32_t value);
		bool get_userAssignable();
		void set_userAssignable(bool value);
		void _ctor();
		void _ctor(Rewired_Core::Rewired::InputCategory* source);
	};
}

