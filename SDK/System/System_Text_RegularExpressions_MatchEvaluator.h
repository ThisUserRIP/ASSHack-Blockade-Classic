#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct String; };
namespace System::System::Text::RegularExpressions { struct Match; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace System::System::Text::RegularExpressions
{
	struct MatchEvaluator : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		mscorlib::System::String* Invoke(System::Text::RegularExpressions::Match* match);
		mscorlib::System::IAsyncResult* BeginInvoke(System::Text::RegularExpressions::Match* match, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		mscorlib::System::String* EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

