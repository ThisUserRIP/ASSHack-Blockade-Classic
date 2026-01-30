#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ArgumentException.h"
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };

namespace mscorlib::System::Globalization
{
	struct CultureNotFoundException : mscorlib::System::ArgumentException
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_invalidCultureName;
		mscorlib::System::Nullable_1<mscorlib::System::Int32> m_invalidCultureId;
		void _ctor();
		void _ctor(mscorlib::System::String* paramName, mscorlib::System::String* message);
		void _ctor(mscorlib::System::String* paramName, mscorlib::System::String* invalidCultureName, mscorlib::System::String* message);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::Nullable_1<mscorlib::System::Int32> get_InvalidCultureId();
		mscorlib::System::String* get_InvalidCultureName();
		static mscorlib::System::String* get_DefaultMessage();
		mscorlib::System::String* get_FormatedInvalidCultureId();
		mscorlib::System::String* get_Message();
	};
}

