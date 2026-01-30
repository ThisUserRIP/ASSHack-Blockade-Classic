#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Exception.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "LitJson_ParserToken.h"
namespace mscorlib::System { struct Exception; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::LitJson
{
	struct JsonException : mscorlib::System::Exception
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		void _ctor(Assembly_CSharp::LitJson::ParserToken token);
		void _ctor(Assembly_CSharp::LitJson::ParserToken token, mscorlib::System::Exception* inner_exception);
		void _ctor(int32_t c);
		void _ctor(int32_t c, mscorlib::System::Exception* inner_exception);
		void _ctor(mscorlib::System::String* message);
		void _ctor(mscorlib::System::String* message, mscorlib::System::Exception* inner_exception);
	};
}

