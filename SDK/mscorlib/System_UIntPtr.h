#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Void; };
#include "System_Void.h"
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_UInt64.h"
namespace mscorlib::System { struct UInt64; };

namespace mscorlib::System
{
	struct UIntPtr
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void* _pointer;
		void _ctor(uint32_t value);
		void _ctor(void* value);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		mscorlib::System::String* ToString();
		void System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		static bool op_Equality(uintptr_t value1, uintptr_t value2);
		static int32_t get_Size();
		static void _cctor();
	};
}

