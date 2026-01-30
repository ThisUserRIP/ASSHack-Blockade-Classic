#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "System_Guid_GuidParseThrowStyle.h"
#include "System_Guid_ParseFailureKind.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Exception; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct Guid_GuidResult
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Guid parsedGuid;
		mscorlib::System::Guid_GuidParseThrowStyle throwStyle;
		mscorlib::System::Guid_ParseFailureKind m_failure;
		mscorlib::System::String* m_failureMessageID;
		mscorlib::System::Object* m_failureMessageFormatArgument;
		mscorlib::System::String* m_failureArgumentName;
		mscorlib::System::Exception* m_innerException;
		void Init(mscorlib::System::Guid_GuidParseThrowStyle canThrow);
		void SetFailure(mscorlib::System::Exception* nativeException);
		void SetFailure(mscorlib::System::Guid_ParseFailureKind failure, mscorlib::System::String* failureMessageID);
		void SetFailure(mscorlib::System::Guid_ParseFailureKind failure, mscorlib::System::String* failureMessageID, mscorlib::System::Object* failureMessageFormatArgument);
		void SetFailure(mscorlib::System::Guid_ParseFailureKind failure, mscorlib::System::String* failureMessageID, mscorlib::System::Object* failureMessageFormatArgument, mscorlib::System::String* failureArgumentName, mscorlib::System::Exception* innerException);
		mscorlib::System::Exception* GetGuidParseException();
	};
}

