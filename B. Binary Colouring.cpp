#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll t;
  cin >> t;

  while (t--)
  {
    ll x;
    cin >> x;
    vector<int> res(31, 0);
    for (int i = 0; i < 30; i++)
    {
      if (1ll & (x >> i))
      {
        if (res[i])
        {
          res[i + 1] = 1;
          res[i] = 0;
        }
        else if (i > 0)
        {
          if (res[i - 1] == 1)
          {
            res[i + 1] = 1;
            res[i - 1] = -1;
          }
          else
          {
            res[i] = 1;
          }
        }
        else if (i == 0)
        {
          res[i] = 1;
        }
      }
    }

    cout << 31 << '\n';

    for (int i = 0; i <= 30; i++)
    {
      cout << res[i] << ' ';
    }
    cout << '\n';

  }

  return 0;

  
}


/*


EV Charging Station Management

1. Functional Requirements

1. User Management
    - User Registration and Authentication: The system should allow new users to register and existing users to log in.
    - User Profiles: Users should be able to view and edit their profiles, including personal details, payment information, and preferences.
    - Role Management: Different roles (e.g., admin, station operator, end-user) should have different permissions and access levels.
2. Station Management
    - Station Registration: Ability for admins to add new charging stations, including location, number of charging points, and specifications.
    - Station Monitoring: Real-time monitoring of station status, including availability, operational status, and usage statistics.
    - Maintenance Scheduling: Schedule and track maintenance activities for each station.
3. Charging Session Management
    - Session Initiation and Termination: Users should be able to start and stop charging sessions via a mobile app or web interface.
    - Real-time Status Updates: Provide real-time updates on charging progress, including time remaining, power delivered, and cost incurred.
    - Reservation System: Allow users to reserve charging slots in advance.
4. Billing and Payment
    - Payment Processing: Support multiple payment methods, including credit/debit cards, digital wallets, and subscription plans.
    - Pricing Models: Implement different pricing models such as pay-per-use, time-based, and subscription-based pricing.
    - Billing History: Users should be able to view their past charging sessions and associated costs.
5. Notifications and Alerts
    - Session Notifications: Notify users of important events such as session start, completion, and errors.
    - System Alerts: Admins and operators should receive alerts for critical issues like station malfunctions or power outages.
6. Reporting and Analytics
    - Usage Reports: Generate reports on station usage, user activity, revenue, and performance metrics.
    - Data Visualization: Provide dashboards with key performance indicators (KPIs) and trends.
7. Integration and Interoperability
    - Third-Party Integration: Integrate with third-party systems such as navigation apps, fleet management systems, and utility companies.
    - API Access: Provide APIs for external systems to interact with the EV charging management system.
8. Security and Compliance
    - Data Security: Ensure secure handling and storage of user data, payment information, and system logs.
    - Regulatory Compliance: Comply with relevant regulations and standards, including data protection and electric vehicle charging standards.

 2. Non-Functional Requirements

1. Performance
    - Scalability: The system should be able to scale to manage thousands of charging stations and users without performance degradation.
    - Response Time: Ensure that key operations (e.g., session initiation, payment processing) are completed within acceptable time frames (e.g., < 2 seconds).
2. Reliability
    - Availability: Aim for high availability (e.g., 99.9% uptime) to ensure the system is accessible whenever needed.
    - Fault Tolerance: Implement mechanisms to handle failures gracefully and recover quickly.
3. Usability
    - User Interface: Design intuitive and user-friendly interfaces for web and mobile applications.
    - Accessibility: Ensure the system is accessible to users with disabilities, following WCAG guidelines.
4. Maintainability
    - Modular Architecture: Use a modular design to facilitate updates, maintenance, and scalability.
    - Documentation: Provide comprehensive documentation for developers, operators, and end-users.
5. Security
    - Authentication and Authorization: Implement strong authentication and role-based authorization.
    - Encryption: Use encryption for data at rest and in transit to protect sensitive information.
6. Compliance
    - Standards Adherence: Ensure compliance with industry standards for EV charging infrastructure (e.g., OCPP, ISO 15118).
    - Data Protection: Adhere to data protection regulations such as GDPR or CCPA.
7. Interoperability
    - Standard Protocols: Support industry-standard communication protocols to ensure interoperability with different hardware and software systems.
8. Support and Maintenance
    - Customer Support: Provide robust customer support options, including live chat, email, and phone support.
    - Maintenance Windows: Schedule regular maintenance windows and inform users in advance to minimize disruption.

By meeting these functional and non-functional requirements, the system will be well-equipped to manage multiple EV charging stations efficiently, ensuring a seamless and user-friendly experience for all stakeholders involved.



*/