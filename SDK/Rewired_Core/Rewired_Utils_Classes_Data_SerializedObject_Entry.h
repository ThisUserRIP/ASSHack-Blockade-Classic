#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Utils_Classes_Data_SerializedObject.h"
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct SerializedObject; };
namespace mscorlib::System { struct Object; };
#include "Rewired_Utils_Classes_Data_SerializedObject_FieldOptions.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Rewired_Core::Rewired::Utils::Classes::Data
{
	struct SerializedObject_Entry
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* type;
		mscorlib::System::Object* value;
		Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions options;
		void _ctor(mscorlib::System::Type* type, mscorlib::System::Object* value, Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions options);
		mscorlib::System::String* ToString();
	};
}

