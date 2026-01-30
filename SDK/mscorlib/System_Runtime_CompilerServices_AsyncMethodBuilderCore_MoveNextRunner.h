#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Runtime_CompilerServices_AsyncMethodBuilderCore.h"
namespace mscorlib::System::Runtime::CompilerServices { struct AsyncMethodBuilderCore; };
namespace mscorlib::System::Threading { struct ExecutionContext; };
namespace mscorlib::System::Runtime::CompilerServices { struct IAsyncStateMachine; };
namespace mscorlib::System::Threading { struct ContextCallback; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Runtime::CompilerServices
{
	struct AsyncMethodBuilderCore_MoveNextRunner : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::ExecutionContext* m_context;
		mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine* m_stateMachine;
		struct StaticFields
		{
			mscorlib::System::Threading::ContextCallback* s_invokeMoveNext;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Threading::ExecutionContext* context, mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
		void Run();
		static void InvokeMoveNext(mscorlib::System::Object* stateMachine);
	};
}

