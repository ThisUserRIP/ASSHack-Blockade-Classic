#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Runtime::Serialization { struct ObjectHolder; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct ObjectHolderListEnumerator; };

namespace mscorlib::System::Runtime::Serialization
{
	struct ObjectHolderList : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Runtime::Serialization::ObjectHolder*>* m_values;
		int32_t m_count;
		void _ctor();
		void _ctor(int32_t startingSize);
		void Add(mscorlib::System::Runtime::Serialization::ObjectHolder* value);
		mscorlib::System::Runtime::Serialization::ObjectHolderListEnumerator* GetFixupEnumerator();
		void EnlargeArray();
		int32_t get_Version();
		int32_t get_Count();
	};
}

