#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Runtime::Serialization { struct ObjectHolderList; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct ObjectHolder; };

namespace mscorlib::System::Runtime::Serialization
{
	struct ObjectHolderListEnumerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_isFixupEnumerator;
		mscorlib::System::Runtime::Serialization::ObjectHolderList* m_list;
		int32_t m_startingVersion;
		int32_t m_currPos;
		void _ctor(mscorlib::System::Runtime::Serialization::ObjectHolderList* list, bool isFixupEnumerator);
		bool MoveNext();
		mscorlib::System::Runtime::Serialization::ObjectHolder* get_Current();
	};
}

