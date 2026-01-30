#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_StringComparer.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System
{
	struct OrdinalComparer : mscorlib::System::StringComparer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _ignoreCase;
		void _ctor(bool ignoreCase);
		int32_t Compare(mscorlib::System::String* x, mscorlib::System::String* y);
		bool Equals(mscorlib::System::String* x, mscorlib::System::String* y);
		int32_t GetHashCode(mscorlib::System::String* obj);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
}

