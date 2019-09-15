#pragma once
#include <functional>
#include <thread>

namespace ed
{
	class UpdateChecker
	{
	public:
		static const int MyVersion = 3;

		UpdateChecker();
		~UpdateChecker();

		void CheckForUpdates(std::function<void()> onUpdate);

	private:
		std::thread* m_thread;
	};
}