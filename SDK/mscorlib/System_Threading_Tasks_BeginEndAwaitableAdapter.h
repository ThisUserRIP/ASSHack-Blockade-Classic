#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Action; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Threading::Tasks
{
	struct BeginEndAwaitableAdapter : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IAsyncResult* _asyncResult;
		mscorlib::System::Action* _continuation;
		struct StaticFields
		{
			mscorlib::System::Action* CALLBACK_RAN;
			mscorlib::System::AsyncCallback* Callback;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::Threading::Tasks::BeginEndAwaitableAdapter* GetAwaiter();
		bool get_IsCompleted();
		void UnsafeOnCompleted(mscorlib::System::Action* continuation);
		void OnCompleted(mscorlib::System::Action* continuation);
		mscorlib::System::IAsyncResult* GetResult();
		void _ctor();
		static void _cctor();
	};
}

