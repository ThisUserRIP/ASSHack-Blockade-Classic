#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "System_Collections_Generic_EqualityComparer_1.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Collections::Generic
{
	struct NonRandomizedStringEqualityComparer : mscorlib::System::Collections::Generic::EqualityComparer_1<mscorlib::System::String>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Equals(mscorlib::System::String* x, mscorlib::System::String* y);
		int32_t GetHashCode(mscorlib::System::String* obj);
		void _ctor();
	};
}

