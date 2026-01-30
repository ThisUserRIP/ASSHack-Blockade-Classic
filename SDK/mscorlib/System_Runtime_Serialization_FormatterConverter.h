#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::Runtime::Serialization
{
	struct FormatterConverter : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		mscorlib::System::Object* Convert(mscorlib::System::Object* value, mscorlib::System::Type* type);
		bool ToBoolean(mscorlib::System::Object* value);
		int32_t ToInt32(mscorlib::System::Object* value);
		int64_t ToInt64(mscorlib::System::Object* value);
		float ToSingle(mscorlib::System::Object* value);
		mscorlib::System::String* ToString(mscorlib::System::Object* value);
	};
}

