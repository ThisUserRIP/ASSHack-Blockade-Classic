#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Void; };
#include "System_Void.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System
{
	struct IntPtr
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void* m_value;
		void _ctor(int32_t value);
		void _ctor(int64_t value);
		void _ctor(void* value);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		static int32_t get_Size();
		void System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		int32_t ToInt32();
		int64_t ToInt64();
		void* ToPointer();
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::String* format);
		static bool op_Equality(intptr_t value1, intptr_t value2);
		static bool op_Inequality(intptr_t value1, intptr_t value2);
		static intptr_t Add(intptr_t pointer, int32_t offset);
		bool IsNull();
	};
}

