#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Runtime::Serialization
{
	struct LongList : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int64_t>* m_values;
		int32_t m_count;
		int32_t m_totalItems;
		int32_t m_currentItem;
		void _ctor();
		void _ctor(int32_t startingSize);
		void Add(int64_t value);
		int32_t get_Count();
		void StartEnumeration();
		bool MoveNext();
		int64_t get_Current();
		bool RemoveElement(int64_t value);
		void EnlargeArray();
	};
}

