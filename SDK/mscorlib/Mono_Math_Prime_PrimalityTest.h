#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_MulticastDelegate.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::Mono::Math { struct BigInteger; };
#include "Mono_Math_Prime_ConfidenceFactor.h"
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace mscorlib::Mono::Math::Prime
{
	struct PrimalityTest : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		bool Invoke(mscorlib::Mono::Math::BigInteger* bi, mscorlib::Mono::Math::Prime::ConfidenceFactor confidence);
		mscorlib::System::IAsyncResult* BeginInvoke(mscorlib::Mono::Math::BigInteger* bi, mscorlib::Mono::Math::Prime::ConfidenceFactor confidence, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		bool EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

