#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace System_Xml::System::Xml::Schema
{
	struct BitSet : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t count;
		IL2CPP::Array<uint32_t>* bits;
		void _ctor();
		void _ctor(int32_t count);
		int32_t get_Count();
		bool get_Item(int32_t index);
		void Clear();
		void Set(int32_t index);
		bool Get(int32_t index);
		int32_t NextSet(int32_t startFrom);
		void And(System_Xml::System::Xml::Schema::BitSet* other);
		void Or(System_Xml::System::Xml::Schema::BitSet* other);
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* obj);
		System_Xml::System::Xml::Schema::BitSet* Clone();
		bool get_IsEmpty();
		bool Intersects(System_Xml::System::Xml::Schema::BitSet* other);
		int32_t Subscript(int32_t bitIndex);
		void EnsureLength(int32_t nRequiredLength);
	};
}

