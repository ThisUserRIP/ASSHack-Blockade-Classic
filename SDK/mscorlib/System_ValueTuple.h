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
namespace mscorlib::System::Collections { struct IComparer; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System
{
	struct ValueTuple
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(mscorlib::System::ValueTuple other);
		bool System_Collections_IStructuralEquatable_Equals(mscorlib::System::Object* other, mscorlib::System::Collections::IEqualityComparer* comparer);
		int32_t System_IComparable_CompareTo(mscorlib::System::Object* other);
		int32_t CompareTo(mscorlib::System::ValueTuple other);
		int32_t System_Collections_IStructuralComparable_CompareTo(mscorlib::System::Object* other, mscorlib::System::Collections::IComparer* comparer);
		int32_t GetHashCode();
		int32_t System_Collections_IStructuralEquatable_GetHashCode(mscorlib::System::Collections::IEqualityComparer* comparer);
		mscorlib::System::String* ToString();
		static int32_t CombineHashCodes(int32_t h1, int32_t h2);
		static int32_t CombineHashCodes(int32_t h1, int32_t h2, int32_t h3);
		static int32_t CombineHashCodes(int32_t h1, int32_t h2, int32_t h3, int32_t h4);
		static int32_t CombineHashCodes(int32_t h1, int32_t h2, int32_t h3, int32_t h4, int32_t h5);
	};
}

