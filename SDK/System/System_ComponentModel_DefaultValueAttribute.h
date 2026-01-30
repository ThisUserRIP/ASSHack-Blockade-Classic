#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System::System::ComponentModel
{
	struct DefaultValueAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* value;
		void _ctor(mscorlib::System::Type* type, mscorlib::System::String* value);
		void _ctor(wchar_t value);
		void _ctor(uint8_t value);
		void _ctor(int16_t value);
		void _ctor(int32_t value);
		void _ctor(int64_t value);
		void _ctor(float value);
		void _ctor(double value);
		void _ctor(bool value);
		void _ctor(mscorlib::System::String* value);
		void _ctor(mscorlib::System::Object* value);
		mscorlib::System::Object* get_Value();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		void SetValue(mscorlib::System::Object* value);
	};
}

