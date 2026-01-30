#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Threading { struct Thread; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct ThreadedJob : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_IsDone;
		mscorlib::System::Object* m_Handle;
		mscorlib::System::Threading::Thread* m_Thread;
		bool get_IsDone();
		void set_IsDone(bool value);
		void Start();
		void Abort();
		void Restart();
		void ThreadFunction();
		void OnFinished();
		bool Update();
		void Run();
		void _ctor();
	};
}

