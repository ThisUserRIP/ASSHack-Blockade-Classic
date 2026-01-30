#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Version.h"
namespace mscorlib::System { struct Version; };
#include "System_Version_ParseFailureKind.h"
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Exception; };

namespace mscorlib::System
{
	struct Version_VersionResult
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Version* m_parsedVersion;
		mscorlib::System::Version_ParseFailureKind m_failure;
		mscorlib::System::String* m_exceptionArgument;
		mscorlib::System::String* m_argumentName;
		bool m_canThrow;
		void Init(mscorlib::System::String* argumentName, bool canThrow);
		void SetFailure(mscorlib::System::Version_ParseFailureKind failure);
		void SetFailure(mscorlib::System::Version_ParseFailureKind failure, mscorlib::System::String* argument);
		mscorlib::System::Exception* GetVersionParseException();
	};
}

