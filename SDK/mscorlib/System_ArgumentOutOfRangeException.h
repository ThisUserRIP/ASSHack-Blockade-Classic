#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ArgumentException.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };

namespace mscorlib::System
{
	struct ArgumentOutOfRangeException : mscorlib::System::ArgumentException
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* m_actualValue;
		struct StaticFields
		{
			mscorlib::System::String* _rangeMessage;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* get_RangeMessage();
		void _ctor();
		void _ctor(mscorlib::System::String* paramName);
		void _ctor(mscorlib::System::String* paramName, mscorlib::System::String* message);
		void _ctor(mscorlib::System::String* paramName, mscorlib::System::Object* actualValue, mscorlib::System::String* message);
		mscorlib::System::String* get_Message();
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
	};
}

