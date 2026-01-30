#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System::Threading { struct CancellationCallbackInfo; };
#include "System_Threading_SparselyPopulatedArrayAddInfo_1.h"
namespace mscorlib::System::Threading { template <typename T> struct SparselyPopulatedArrayAddInfo_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Threading
{
	struct CancellationTokenRegistration
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::CancellationCallbackInfo* m_callbackInfo;
		mscorlib::System::Threading::SparselyPopulatedArrayAddInfo_1<mscorlib::System::Threading::CancellationCallbackInfo> m_registrationInfo;
		void _ctor(mscorlib::System::Threading::CancellationCallbackInfo* callbackInfo, mscorlib::System::Threading::SparselyPopulatedArrayAddInfo_1<mscorlib::System::Threading::CancellationCallbackInfo> registrationInfo);
		bool TryDeregister();
		void Dispose();
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(mscorlib::System::Threading::CancellationTokenRegistration other);
		int32_t GetHashCode();
	};
}

