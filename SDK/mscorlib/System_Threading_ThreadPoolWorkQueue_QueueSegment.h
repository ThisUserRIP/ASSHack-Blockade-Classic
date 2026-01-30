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
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Threading
{
	struct ThreadPoolWorkQueue_QueueSegment : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Threading::IThreadPoolWorkItem*>* nodes;
		int32_t indexes;
		mscorlib::System::Threading::ThreadPoolWorkQueue_QueueSegment* Next;
		void GetIndexes(int32_t& upper, int32_t& lower);
		bool CompareExchangeIndexes(int32_t& prevUpper, int32_t newUpper, int32_t& prevLower, int32_t newLower);
		void _ctor();
		bool IsUsedUp();
		bool TryEnqueue(mscorlib::System::Threading::IThreadPoolWorkItem* node);
		bool TryDequeue(mscorlib::System::Threading::IThreadPoolWorkItem& node);
	};
}

