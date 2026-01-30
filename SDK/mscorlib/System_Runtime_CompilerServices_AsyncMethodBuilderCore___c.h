#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Runtime_CompilerServices_AsyncMethodBuilderCore.h"
namespace mscorlib::System::Runtime::CompilerServices { struct AsyncMethodBuilderCore; };
namespace mscorlib::System::Threading { struct SendOrPostCallback; };
namespace mscorlib::System::Threading { struct WaitCallback; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Runtime::CompilerServices
{
	struct AsyncMethodBuilderCore___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Runtime::CompilerServices::AsyncMethodBuilderCore___c* __9;
			mscorlib::System::Threading::SendOrPostCallback* __9__6_0;
			mscorlib::System::Threading::WaitCallback* __9__6_1;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void _ThrowAsync_b__6_0(mscorlib::System::Object* state);
		void _ThrowAsync_b__6_1(mscorlib::System::Object* state);
	};
}

