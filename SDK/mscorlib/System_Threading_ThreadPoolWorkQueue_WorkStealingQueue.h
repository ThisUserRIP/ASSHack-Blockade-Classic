#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Threading_ThreadPoolWorkQueue.h"
namespace mscorlib::System::Threading { struct ThreadPoolWorkQueue; };
namespace mscorlib::System::Threading { struct IThreadPoolWorkItem; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Threading_SpinLock.h"
namespace mscorlib::System::Threading { struct SpinLock; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Threading
{
	struct ThreadPoolWorkQueue_WorkStealingQueue : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Threading::IThreadPoolWorkItem*>* m_array;
		int32_t m_mask;
		int32_t m_headIndex;
		int32_t m_tailIndex;
		mscorlib::System::Threading::SpinLock m_foreignLock;
		void LocalPush(mscorlib::System::Threading::IThreadPoolWorkItem* obj);
		bool LocalFindAndPop(mscorlib::System::Threading::IThreadPoolWorkItem* obj);
		bool LocalPop(mscorlib::System::Threading::IThreadPoolWorkItem& obj);
		bool TrySteal(mscorlib::System::Threading::IThreadPoolWorkItem& obj, bool& missedSteal);
		bool TrySteal(mscorlib::System::Threading::IThreadPoolWorkItem& obj, bool& missedSteal, int32_t millisecondsTimeout);
		void _ctor();
	};
}

