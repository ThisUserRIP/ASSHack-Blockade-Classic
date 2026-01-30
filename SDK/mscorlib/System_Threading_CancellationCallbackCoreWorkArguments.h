#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System::Threading { struct CancellationCallbackInfo; };
namespace mscorlib::System::Threading { template <typename T> struct SparselyPopulatedArrayFragment_1; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Threading
{
	struct CancellationCallbackCoreWorkArguments
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::SparselyPopulatedArrayFragment_1<mscorlib::System::Threading::CancellationCallbackInfo>* m_currArrayFragment;
		int32_t m_currArrayIndex;
		void _ctor(mscorlib::System::Threading::SparselyPopulatedArrayFragment_1<mscorlib::System::Threading::CancellationCallbackInfo>* currArrayFragment, int32_t currArrayIndex);
	};
}

