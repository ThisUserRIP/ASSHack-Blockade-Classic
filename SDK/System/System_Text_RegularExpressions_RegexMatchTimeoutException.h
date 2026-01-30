#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_TimeoutException.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "..\mscorlib\System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };

namespace System::System::Text::RegularExpressions
{
	struct RegexMatchTimeoutException : mscorlib::System::TimeoutException
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* regexInput;
		mscorlib::System::String* regexPattern;
		mscorlib::System::TimeSpan matchTimeout;
		void _ctor(mscorlib::System::String* regexInput, mscorlib::System::String* regexPattern, mscorlib::System::TimeSpan matchTimeout);
		void _ctor();
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* si, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void Init();
		void Init(mscorlib::System::String* input, mscorlib::System::String* pattern, mscorlib::System::TimeSpan timeout);
	};
}

