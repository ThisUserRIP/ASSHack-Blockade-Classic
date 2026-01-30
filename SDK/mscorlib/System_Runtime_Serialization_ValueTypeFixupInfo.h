#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System::Reflection { struct FieldInfo; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::Serialization
{
	struct ValueTypeFixupInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t m_containerID;
		mscorlib::System::Reflection::FieldInfo* m_parentField;
		IL2CPP::Array<int32_t>* m_parentIndex;
		void _ctor(int64_t containerID, mscorlib::System::Reflection::FieldInfo* member, IL2CPP::Array<int32_t>* parentIndex);
		int64_t get_ContainerID();
		mscorlib::System::Reflection::FieldInfo* get_ParentField();
		IL2CPP::Array<int32_t>* get_ParentIndex();
	};
}

