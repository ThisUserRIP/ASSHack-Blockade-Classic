#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections { struct IEqualityComparer; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Collections
{
	struct IStructuralEquatable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Equals(mscorlib::System::Object* other, mscorlib::System::Collections::IEqualityComparer* comparer);
		int32_t GetHashCode(mscorlib::System::Collections::IEqualityComparer* comparer);
	};
}

