#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Enum.h"
namespace mscorlib::System { struct Enum; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Enum_ParseFailureKind.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Exception; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct Enum_EnumResult
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* parsedEnum;
		bool canThrow;
		mscorlib::System::Enum_ParseFailureKind m_failure;
		mscorlib::System::String* m_failureMessageID;
		mscorlib::System::String* m_failureParameter;
		mscorlib::System::Object* m_failureMessageFormatArgument;
		mscorlib::System::Exception* m_innerException;
		void Init(bool canMethodThrow);
		void SetFailure(mscorlib::System::Exception* unhandledException);
		void SetFailure(mscorlib::System::Enum_ParseFailureKind failure, mscorlib::System::String* failureParameter);
		void SetFailure(mscorlib::System::Enum_ParseFailureKind failure, mscorlib::System::String* failureMessageID, mscorlib::System::Object* failureMessageFormatArgument);
		mscorlib::System::Exception* GetEnumParseException();
	};
}

