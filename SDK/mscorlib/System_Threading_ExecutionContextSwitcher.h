#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Threading_ExecutionContext_Reader.h"
namespace mscorlib::System::Threading { struct ExecutionContext_Reader; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Threading { struct Thread; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Threading
{
	struct ExecutionContextSwitcher
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::ExecutionContext_Reader outerEC;
		bool outerECBelongsToScope;
		mscorlib::System::Object* hecsw;
		mscorlib::System::Threading::Thread* thread;
		bool UndoNoThrow();
		void Undo();
	};
}

