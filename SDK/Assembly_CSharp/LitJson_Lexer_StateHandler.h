#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "LitJson_Lexer.h"
namespace Assembly_CSharp::LitJson { struct Lexer; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::LitJson { struct FsmContext; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace Assembly_CSharp::LitJson
{
	struct Lexer_StateHandler : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		bool Invoke(Assembly_CSharp::LitJson::FsmContext* ctx);
		mscorlib::System::IAsyncResult* BeginInvoke(Assembly_CSharp::LitJson::FsmContext* ctx, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		bool EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

